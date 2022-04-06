1
以下代码段的输出是：
int sum = 0;
for ( int i=0; i<10; i++ ) {
    if ( i%2 ) continue;
    sum += i;
}
printf("%d\n", sum);
20
正确答案：20
2
以下代码段的输出是：
int sum = 0;
for ( int i=0; i<10; i++ ) {
    if ( i%2 ) break;
    sum += i;
}
printf("%d\n", sum);
0
正确答案：0
