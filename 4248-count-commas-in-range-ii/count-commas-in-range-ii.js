/**
 * @param {number} n
 * @return {number}
 */
var countCommas = function(n) {
    let start = 1000;
    let commas = 1;
    let total = 0;

    while (start <= n) {
        let end = start * 1000 - 1;

        let count = Math.min(n, end) - start + 1;

        total += count * commas;

        start *= 1000;
        commas++;
    }

    return total;
};