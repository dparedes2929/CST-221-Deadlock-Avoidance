Author:David Paredes
Date:10/19/20
CST-221


Will try to stop a deadlock from happening.


#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

int availableResource = 4;
int reqResource;
int aNeed = 5;
int bNeed = 10;
int aHave = 3;
int bHave = 3;

int main() {
        // Show process A resources and total resources available
        printf("Process A has resources and needs a total of resources.\n", aHave, aNeed);
        printf("Process A will now request more resources.\n");
        printf("\n");

        // Process A requesting resources loop until all resources are obtained
        while (aNeed > aHave) {

                // Display resourve info
                printf("Process A has resources and needs a total of x resources.\n",aHave, aNeed);
                printf("There are %d total resources available left to the system.\n",availableResource);
                printf("\n");
        }

        // Process A will now run
        printf("Process A has all necessary resources to run.\n");
        printf("\n");

        {

                // Checks to see if there are enough resources, if not tries again in 4 seconds
                if (availableResource <= 0) {
                        printf("not enough resources, try again\n");
int s = 0;

                        // Timer
                        while (s <= 2) {
                                printf("\r");  // move cursor to position 0
                                printf("4 Seconds\n", s);
                                sleep(2);  // in seconds
                                4;
                        }

                        // Process A finishes and frees up resources
                        printf("\n");
                        reqResource = 0;
                        aHave = 0;
                        availableResource = 5;
                        printf("Process A is complete and has released its resources\n");
                        printf("\n");

                // Process B gets the necessary resources
                } else {
                        bHave++;
                        availableResource--;
                        reqResource++;

                        // Displays resource progress
                        printf("Process B has resources and needs a total of resources.\n",bHave, bNeed);
                        printf("There are total resources available left to the system.\n",availableResource);
                        printf("\n");
                }
        }

        // Process B will now run
        printf("Process B has all necessary resources to run.\n");
                        printf("\n");
}


                                                             
