const arr = [3, 2, 5, 1, 4];

var n = arr.length;

for (let i = 1; i < n; i++) {
  let temp = arr[i];
  let j = i - 1;
  while (j >= 0 && arr[j] > temp) {
    arr[j + 1] = arr[j];
    j -= 1;
  }

  j += 1;
  arr[j] = temp;
}

for (let i = 0; i < n; i++) {
  console.log(arr[i]);
}
