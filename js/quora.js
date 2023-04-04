
similar = ['', '']

function findSimilar(yourMap)
{

    let currentCounter = 0;
    let counterMax = 0;
    let length = 0;

    let mapKeys = [...yourMap.keys()]
    //let current = [...yourMap][0]
    //let next = []
   
    let current = []
    let next = []


    for(let y = 0; y < mapKeys.length; y++)
    {

        current = [mapKeys[y], map.get(mapKeys[y])]

        for(let x = 0; x < mapKeys.length; x++)
        { 

            length = current[1].length > x.length  ? current[1].length : x.length;
            next = [mapKeys[x], yourMap.get(mapKeys[x])]

            if(current[0] == next[0])
                continue;

            console.log(current)
            console.log(next)
            console.log('--------------')

            if(counterMax < currentCounter)
                counterMax = currentCounter;
            
            current = next
        }
    }
}

const Arr = [['a', 1], ['a', 3], ['a', 5],
            ['b', 2], ['b', 6], 
            ['c', 1], ['c', 2], ['c', 3], ['c', 4], ['c', 5],
            ['d', 1], ['d', 3], ['d', 5], ['d', 6]]

const map = new Map()

for(x in Arr)
{

    if(map.get(Arr[x][0]) == undefined)
    {
        map.set(Arr[x][0], Arr[x][1])
    }
    else
    {
        Tmp = [map.get(Arr[x][0])]
        Tmp.push(Arr[x][1])
        map.set(Arr[x][0], [].concat(...Tmp))
    }
}

//console.log(map)
findSimilar(map)




