var isPalindrome = function (s) {
  let str = s.toLowerCase().replace(/[^a-z0-9]/g, "");
  let str2 = str.split("").reverse().join("");

  return str === str2;
};

const s = "A man, a plan, a canal: Panama";
console.log(isPalindrome(s));
