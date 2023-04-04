friends = {
    0: [1, 2],
    1: [0, 5],
    2: [0],
    3: [6],
    4: [],
    5: [1],
    6: [6]
}

function getGroups(arr) {
    isAlreadyInGroup = []

    let tmp = null
    tmpArr = []

    for (let i = 0; i < 7; i++) {


        if (isAlreadyInGroup.indexOf(i) != -1) {
            continue;
        }

        tmpArr.push(i)
        isAlreadyInGroup.push(i)

        tmp = friends[i]

        for (let k = 0; k < tmp.length; k++) {

            if (isAlreadyInGroup.indexOf(tmp[k]) != -1) {
                continue;
            }
            isAlreadyInGroup.push(tmp[k])
            tmpArr.push(tmp[k])
        }

        console.log(isAlreadyInGroup)

        arr.push(tmpArr)

    }
}


groups = []

getGroups(groups)

// console.log(groups)