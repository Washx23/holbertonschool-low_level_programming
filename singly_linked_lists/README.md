The linked list stores data in sequential storage, like arrays. Though the data are stored sequentially, the memory locations are not contiguous.
Unlike an array, the linked list can store data of different data types.
The below diagram represents the linked-list structure.
The linked list stores data in sequential storage, like arrays. Though the data are stored sequentially, the memory locations are not contiguous.
Unlike an array, the linked list can store data of different data types.
The below diagram represents the linked-list structure.
InsertNode: In this article, insertion is done at the end of the list. Follow the steps to insert a node in the linked list.

Let’s say, 4 is to be inserted on the existing linked list, i.e., 1 -> 2 -> 3.The resultant linked list will be 1 -> 2 -> 3 -> 4.
To insert a new node traverse till the end of the list until NULL node is found.
Create a new Node, and link the new node to the last node of the linked list.
DeleteNode: In this article, deletion is done using the index of the node. Follow the steps to delete a node: 

If the node to be deleted is the head node, store the head in temp variable. Then update head as head->next. Delete temp.
If the index of the node to be deleted is greater than the length of the list then return from the function.
Traverse till the node to be deleted. Delete the node, and link the previous node to the next node of the deleted node.

