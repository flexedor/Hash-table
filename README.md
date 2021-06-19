# Hash-table
Write a program tracking the amount of transferred money.
###### Commands are given in the following format:
```
+ from to amount - from pays to the specified amount
? from to - display the amount transferred by from to to's account
```
Note: do not calculate a state of the account, track the sum of transfers:
```
+ A B 10
+ A B 10
+ B A 5
? A B
? B A
```
should display:
```
20
5
```
Names from and to consist of maximally 16 lower case letters and underscores. The sum of transfers doesn't exceed int.
# Example
### Input:
```
+ rychu miro 10
+ marek_d tomek 100
+ marek_d lew 20
+ lew adam 17
+ miro rychu 10
? rychu miro
? marek_d tomek
? marek_d lew
? lew adam
? miro rychu
? tomek marek_d
? lew marek_d
? adam lew
```
### Output:
```
10
100
20
17
10
0
0
0
```
