# Selection sort (metoda razmjene)

## General example

```c
int tmp, a[N];
int i, j, i_repl;

for (i = 0; i < N - 1; i++) {
	i_repl = i;
	for (j = i + 1; j < N; j++) {
		if (a[j] > a[i_repl]) // sorting from MAX to MIN, change to "<" to sort from MIN to MAX 
			i_repl = j;
	}

	tmp = a[i];
    a[i] = a[i_repl];
    a[i_repl] = tmp; 

}

```  

##### or  

```c
int a[N], tmp;

for (i = 0; i < N - 1; i++) {
	for (j = i + 1; j < N; j++) {
		if (a[j] > a[i]) { // sorting from MAX to MIN, change to "<" to sort from MIN to MAX 
			tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;

		}
	}
}
```

## Explanation (for MAX to MIN)

1. Find *biggest* element of the array, then replace it with `1st element`
2. Find the `2nd` *biggest* (smaller then previous but bigger then others) and replace it with `2nd element`
3. Find the `3rd` *biggest* element, then replace it with `3rd element`
4. Repeat the process of finding the `Nth` *biggest* element and replacing it with `Nth element`
5. Finish when you reach the end of the array (so that N = last_index)
