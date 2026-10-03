class Solution {
public:
    int numberOfMatches(int n) {
        int matches;
        int count=0;
        int noteam=n;
         while(noteam!=1){
            if(noteam%2==0){
                matches=noteam/2;
                noteam=noteam/2;
                count=count+matches;
            }
            else if(noteam%2!=0){
                matches=(noteam-1)/2;
                noteam=((noteam-1)/2)+1;
                count=count+matches;
            }
         }
       return count;
    }
};