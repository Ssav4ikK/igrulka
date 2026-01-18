document.addEventListener('DOMContentLoaded', () => {
  const carousel = document.querySelector('.carousel');
  const track = carousel.querySelector('.card-track');
  const btnLeft = carousel.querySelector('.nav.left');
  const btnRight = carousel.querySelector('.nav.right');
  const cards = Array.from(track.children);

  let current = cards.findIndex(card => card.classList.contains('active'));
  if (current < 0) current = 0;

  const setActive = (index) => {
    cards.forEach(c => c.classList.remove('active'));
    cards[index].classList.add('active');
  };

  const updateCarousel = () => {
    const containerWidth = carousel.offsetWidth;
    const cardWidth = cards[0].offsetWidth;
    const gap = parseFloat(getComputedStyle(track).gap) || 40;
    const step = cardWidth + gap;

    const offset = (step * current) - (containerWidth / 2) + (cardWidth / 2);
    track.style.transform = `translateX(${-offset}px)`;
    setActive(current);
  };

  btnLeft.addEventListener('click', (e) => {
    e.preventDefault();
    current = (current - 1 + cards.length) % cards.length;
    updateCarousel();
  });

  btnRight.addEventListener('click', (e) => {
    e.preventDefault();
    current = (current + 1) % cards.length;
    updateCarousel();
  });

  window.addEventListener('resize', updateCarousel);
  updateCarousel();
});
