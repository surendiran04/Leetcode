//after 16 index the code has failed 
var addToArrayForm = function (num, k) {
    num = num.join("")
    num = Number(num)
    num = num + k;
    num = Array.from(String(num), num => Number(num))
    return num;
};
var addToArrayForm = function (num, k) {
    num = BigInt(num.join(""))+BigInt(k);
    let result = Array.from(String(num), num => Number(num))
    return result;
};
