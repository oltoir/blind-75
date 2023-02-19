let isAnagram = (str1, str2) => {
  str1 = str1.split("").sort();
  str2 = str2.split("").sort();

  return str1 == str2;
};

let s = "anagram";
let t = "nagaram";

console.log(isAnagram(s, t));
