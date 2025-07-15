// console.log("Aditya Singh");

const arr = [1, 5, 4, 2, 6, 3];

var n = arr.length;

for (let i = 0; i < n; i++) {
  let flag = false;
  for (let j = 0; j < n - i - 1; j++) {
    if (arr[j] > arr[j + 1]) {
      let temp = arr[j];
      arr[j] = arr[j + 1];
      arr[j + 1] = temp;
      flag = true;
    }
  }
  console.log(i + " iteration");
  if (!flag) {
    break;
  }
}

for (let i = 0; i < n; i++) {
  console.log(arr[i]);
}
