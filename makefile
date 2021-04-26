all:bubble selection insertion

bubble:bubble.c
	gcc bubble.c headfile.c -o bubble
selection:selection.c
	gcc selection.c headfile.c -o selection
insertion:insertion.c
	gcc insertion.c headfile.c -o insertion
bubble_str:bubble_str.c
	gcc bubble_str.c headfile.c -o bubble_str
selection_str:selection_str.c
	gcc selection_str.c headfile.c -o selection_str
insertion_str:insertion_str.c
	gcc insertion_str.c headfile.c -o insertion_str
clean:
	rm -f bubble selectoin insertion bubble_str selection_str insertion_str
