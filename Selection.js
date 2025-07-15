const arr = [3, 5, 4, 2, 6, 1];

var n = arr.length;

for (let i = 0; i < n - 1; i++) {
  let idx = i;
  for (let j = i; j < n; j++) {
    if (arr[idx] > arr[j]) {
      idx = j;
    }
  }

  let temp = arr[idx];
  arr[idx] = arr[i];
  arr[i] = temp;
}

for (let i = 0; i < n; i++) {
  console.log(arr[i]);
}
