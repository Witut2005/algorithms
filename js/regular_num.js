const N = 10
counter = 0

arr = []

for (let i = 1; counter < N; i++) {
    if (i == 1) {
        arr.push(i)
        counter++;
    }

    if ((i % 2 == 0) || (i % 3 == 0) || (i % 5 == 0)) {
        arr.push(i)
        counter++;
    }
}

console.log(arr)