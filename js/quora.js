similar = ['', '']

function findSimilar(yourMap) {

    let currentCounter = ['a', 'b', 0];
    let counterMax = ['a', 'b', 0];
    let length = 0;

    let mapKeys = [...yourMap.keys()]
        //let current = [...yourMap][0]
        //let next = []

    let current = []
    let next = []


    for (let y = 0; y < mapKeys.length; y++) {

        current = [mapKeys[y], map.get(mapKeys[y])]

        for (let x = 0; x < mapKeys.length; x++) {


            next = [mapKeys[x], yourMap.get(mapKeys[x])]

            if (next == undefined) { break }

            length = current[1].length > next[1].length ? next[1].length : current[1].length

            currentCounter = [current[0], next[0], 0]

            if (current[0] == next[0])
                continue;

            for (let i = 0; i < length; i++) {
                if (current[1][i] == next[1][i]) {
                    currentCounter[2]++;
                }
            }

            if (counterMax[2] < currentCounter[2]) {
                counterMax = [...currentCounter];
            }

            current = next
        }
    }
    console.log(counterMax)
}

const Arr = [
    ['a', 1],
    ['a', 3],
    ['a', 5],
    ['b', 2],
    ['b', 6],
    ['c', 1],
    ['c', 2],
    ['c', 3],
    ['c', 4],
    ['c', 5],
    ['d', 1],
    ['d', 3],
    ['d', 5],
    ['d', 6]
]

const map = new Map()

for (x in Arr) {

    if (map.get(Arr[x][0]) == undefined) {
        map.set(Arr[x][0], Arr[x][1])
    } else {
        Tmp = [map.get(Arr[x][0])]
        Tmp.push(Arr[x][1])
        map.set(Arr[x][0], [].concat(...Tmp))
    }
}

//console.log(map)
findSimilar(map)