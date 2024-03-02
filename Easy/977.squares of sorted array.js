var sortedSquares = function(nums) {
    nums=nums.map((i)=>{
        return i*i;
    })
    nums.sort((a,b)=> a-b);
    return nums;
};
