// ovenTime returns the amount in minutes that the lasagna should stay in the
// oven.
int ovenTime() {
    // TODO: Return the correct time.
    return 40;
}

/* remainingOvenTime returns the remaining
   minutes based on the actual minutes already in the oven.
*/
int remainingOvenTime(int actualMinutesInOven) {
    // TODO: Calculate and return the remaining in the oven based on the time
    // the lasagna has already been there.

    int neededBakeTime = 40;
    int soFar = neededBakeTime - actualMinutesInOven;

    return soFar;
}

/* preparationTime returns an estimate of the preparation time based on the
   number of layers and the necessary time per layer.
*/

int preperationTime = 2;

int preparationTime(int numberOfLayers) {
    // TODO: Calculate and return the preparation time with the
    // `numberOfLayers`.

    return preperationTime * numberOfLayers;
}

// elapsedTime calculates the total time spent to create and bake the lasagna so
// far.
int elapsedTime(int numberOfLayers, int actualMinutesInOven) {
    // TODO: Calculate and return the total time so far.

    return actualMinutesInOven + preparationTime(numberOfLayers);
}
