int main()
{
    int ctr = 0;
    int ctr2 = 0;
    int word[5][20];
    while (ctr < 5)
    {
        ctr2 = 0;
        while (ctr2 < 5)
        {
            scanf("%d", &word[ctr][ctr2]);
            ctr2++;
        }
        ctr++;
    }
    ctr = 0;
    ctr2 = 0;
    int move1 = 0, move2 = 0, totalmoves = 0, storer;
    while(ctr<5)
    {
        ctr2 = 0;
        while (ctr2<5)
        {
            if(word[ctr][ctr2] == 1)
            {
                if (ctr2 > 2)
                {
                    move1 = ctr2-2;
                }
                else if (ctr2 < 2)
                {
                    move1 = 2 - ctr2;
                }
                if (ctr > 2)
                {
                    move2 = ctr - 2;
                }
                else if (ctr<2)
                {
                    move2 = 2 - ctr;
                }
                break;
            }
            ctr2++;
        }
        if (word[ctr][ctr2] == '1')
        {
            break;
        }
        ctr++;
    }
    totalmoves = move1 + move2;
    printf("%d", totalmoves);
}
