'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.replace(/\s*$/, '')
        .split('\n')
        .map(str => str.replace(/\s*$/, ''));

    main();
});

function readLine() {
    return inputString[currentLine++];
}

function rotate( array , times ){
    let newArray = array;
    while( times-- ) {
        let temp = newArray.shift();
        newArray.push(temp);
    }

    return newArray;
}


function main() {
    const nd = readLine().split(' ');
    const n = parseInt(nd[0], 10);
    const d = parseInt(nd[1], 10);
    const a = readLine().split(' ').map(aTemp => parseInt(aTemp, 10));
    const res = rotate(a, d);

    for(let i = 0; i < res.length; i++) {
        process.stdout.write(`${res[i].toString()} `);
    }
}
