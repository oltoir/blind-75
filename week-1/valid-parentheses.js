s = "]";

const isValid = (s) => {
  const stack = [];
  for (let bracket of s) {
    if (bracket === "(" || bracket === "[" || bracket === "{")
      stack.push(bracket);
    else {
      const lastBracket = stack.pop();
      if (!lastBracket) return false;
      if (
        (lastBracket === "(" && bracket !== ")") ||
        (lastBracket === "[" && bracket !== "]") ||
        (lastBracket === "{" && bracket !== "}")
      )
        return false;
    }
  }
  return stack.length === 0;
};

console.log(isValid(s));
