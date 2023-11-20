const mario = document.querySelector('.mario');
const pipe = document.querySelector('.pipe');
let score = 0;


const jump = () => {
    mario.classList.add('jump');


setTimeout(() => {
    mario.classList.remove('jump');

}, 500);

score++;
updateScore();
}

const loop = setInterval(() => {

    const pipePosition = pipe.offsetLeft;
    const marioPosition = +window.getComputedStyle(mario).bottom.replace('px',' ');
    if (pipePosition <= 120 && pipePosition > 0 && marioPosition < 80 ){

        pipe.style.animation = 'none';
        pipe.style.left = `${pipePosition}px`;

        mario.style.animation = 'none';
        mario.style.bottom = `${marioPosition}px`;

        mario.src = './IMAGENS/game-over.png';
        mario.style.width = '75px';
        mario.style.marginLeft = '50px';
        
         
        

    }

} ,10)
document.addEventListener('keydown', jump);

const updateScore = () => {
    const scoreElement = document.querySelector('.score');
    if (scoreElement) {
        scoreElement.textContent = `Score: ${score}`;
    }
};
