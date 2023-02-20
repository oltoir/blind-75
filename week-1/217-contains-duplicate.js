let containsDuplicate = (nums) => {
  let set = new Set(nums);
  return set.size < nums.length;
};

const nums = [1, 2, 3, 1];
const nums2 = [1, 2, 3, 4];

console.log(containsDuplicate(nums), containsDuplicate(nums2));
