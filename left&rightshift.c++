/*
Left shift operator(<<) , muliply by 2 the number of times it is shifted 
3<<1 -> 000....011(3) -> 000....110(6)
5<<2 -> 000....101(5) -> 000....10100(20)
For larger numbers left shifting can create negative numbers

Right shift operator(>>) , divide by 2 the number of times it is shifted
3>>1 -> 000....011(3) -> 000....001(1)
5>>2 -> 000....101(5) -> 000....001(2)

In case of positive numbers, for left or right shift padding is done with 0
In case of negative numbers, padding is compiler dependent
*/