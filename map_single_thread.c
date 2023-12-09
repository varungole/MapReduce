//generic single-threaded map

void** map(void** things , void* (*f)(void*) , int length) {
    
    //how much space you need for one box to hold something special
    // but we dont want one box , but bunch of boxe
    //malloc gives us space to put all these boxes
    //results is list of boxes , each box holds something special
    void** results = malloc(sizeof(void*)*length);

    //bunch of things lined up
    for(int i = 0; i < length ; i++)
    {
        //pick up first thing at position i
        void *thing = things[i];
        //magic tool f does something with this thing
        void *result = (*f)(thing);
        //put it at the ith place
        results[i] = result;
    }

    return results;
}