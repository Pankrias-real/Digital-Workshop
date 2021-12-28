# Оператори за цикъл


### Цикъл while

```c++
while(<condition>)
{
	 body...
}
```

### Цикъл for
```c++
for(int i = 0; i <= 300; i+=2)
{
 //body
}
```

Структурата на for-циклите включва:
1. Инициализационен блок
2. Условие на цикъла
3. Команди за обновяване на водещите променливи
4. Тяло на цикъла

### Цикъл do-while

_Do-while_ конструкцията е подобна _while_ цикъла, но с тази разлика, че условието е зададено в края т.е. проверката се прави след като се изпълни тялото на цикъла.
```c++
do
{
  //body
} while(<condition>);
```
**Важно**: При do-while тялото се изпълнява поне веднъж!

### Оператор break
Използва се преждевременно излизане от цикъл, преди той да е завършил изпълнението си по естествения си начин.

### Оператор continue
Използва се, когато реализираният алгоритъм изисква пропускане на част от операторите или част от кода в тялото на даден цикъл.