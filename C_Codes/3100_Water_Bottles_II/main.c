int maxBottlesDrunk(int numBottles, int numExchange) {
    int count = 0, numEmptyBottles = 0;
    do {
        if(numBottles > 0){
            numEmptyBottles += numBottles;
            count += numBottles;
            numBottles = 0;
        }
        if(numEmptyBottles >= numExchange){
            numBottles ++;
            numEmptyBottles -= numExchange;
            numExchange ++;
        }
    } while (numBottles != 0 || numEmptyBottles >= numExchange);
    return count;
}

//It's not the most optimize function, but that's what I came up with at first
//Below is the same function but best implemented

int maxBottlesDrunk(int numBottles, int numExchange) {
    int res = numBottles;
    int emp = numBottles;
    while (emp >= numExchange) {
        emp -= numExchange;
        res++;
        emp++;
        numExchange++;
    }
    return res;
}

//Instead of adding a full bottle and then turning it into an empty one, it directly creates the empty and increases
//the counter