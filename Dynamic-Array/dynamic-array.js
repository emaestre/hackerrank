'use strict';

const fs = require('fs');

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', function(inputStdin) {
    inputString += inputStdin;
});

process.stdin.on('end', function() {
    inputString = inputString.split('\n');

    main();
});

function readLine() {
    return inputString[currentLine++];
}

/*
 * Complete the 'dynamicArray' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. 2D_INTEGER_ARRAY queries
 */

function dynamicArray(n, queries) {
    let res = [];
    let seqList = [];
    let lastAnswer = 0;

    for(let index = 0; index < n; index++) {
        seqList.push([]);
    }
    
    for(let index = 0; index < queries.length; index++) {
        let seq = (queries[index][1] ^ lastAnswer) % n;

        if(queries[index][0] == 1) {
            seqList[seq].push(queries[index][2]);
        }
        else {
            let valuePos = queries[index][2] % seqList[seq].length;
            let value = seqList[seq][valuePos];
            lastAnswer = value;
            res.push(lastAnswer);
        }
    }

    return res;
}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

    const firstMultipleInput = readLine().replace(/\s+$/g, '').split(' ');

    const n = parseInt(firstMultipleInput[0], 10);

    const q = parseInt(firstMultipleInput[1], 10);

    let queries = Array(q);

    for (let i = 0; i < q; i++) {
        queries[i] = readLine().replace(/\s+$/g, '').split(' ').map(queriesTemp => parseInt(queriesTemp, 10));
    }

    const result = dynamicArray(n, queries);

    ws.write(result.join('\n') + '\n');

    ws.end();
}
