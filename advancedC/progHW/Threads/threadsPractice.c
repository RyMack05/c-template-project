# include <stdlib.h>
float* generate_random_list(int size){

    float* list = malloc(size * sizeof(float));

    for(int i = 0; i < size; i++) {
        list[i] = (float) rand() / RAND_MAX; // Random float between 0 and 1
    }

    return list;
}

float* average_O_Threads(generate_random_list(*size), thread) {
    // Make a thread

    // Divide the list 

    // Put the division of the list in the thread to take the average
        // Make choices if it doesn't divide evenly by 3, then if its 2 just skip but if its size of 1 leftover then that goes into the averageSum counter
        // Take the average

    // Sum the threads

    // Return the averageSum
}

int main() {
int size = 1000000;
float* random_list = generate_random_list(size);
// Do something with the list
free(random_list);
return 0;
}