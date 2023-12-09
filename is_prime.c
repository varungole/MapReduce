

//int main is where the fun starts
//argc and argv are like magic backpack where you put toys
//argc is argument count ( how many toys you brough to play
//argv is argument values and is like a list of names that tell you what kind
//of toys you brought
int main(int argc , char** argv) {
   //I want to play with thousand boxes
   int N = 1000;
   
   ////enough space to hold all those boxes
   int ** numbers = malloc(sizeof(int*)*N);
   
   //im going to do something to every box
   for(int i = 0 ; i < N ; i++) {

    int *n = malloc(sizeof(int));
    //you put i inside that box
    *n = i;
    //arrange these boxes in a row
    numbers[i] = n;
   }

}