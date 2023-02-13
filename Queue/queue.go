// Implement Queue Data Structure
// TODO: Make Queue Generic

package main

import "fmt"

type Queue []string

// IsEmpty func checks if the queue is empty
func (q *Queue) IsEmpty() bool{
	return len(*q) == 0
}

// EnQueue func enqueues a new value in the Queue
func (q *Queue) EnQueue(str string) {
	fmt.Printf("%s entered queue\n", str)
	*q = append(*q, str)
}
// DeQueue func dequeues "first in" as in FIFO, value in the Queue
func (q *Queue) DeQueue() (string, bool) {
	if q.IsEmpty() {
		return "", false
	} else {
		// pick first element from queue
		element := (*q)[0]
		// slice off the picked element
		*q = (*q)[1:]
		return element, true
	}
}

func main() {
	var queue Queue

	// DeQueue empty queue
	ele, msg := queue.DeQueue()
	if msg == true {
		fmt.Printf("%s", ele)
	} else {
		fmt.Printf("Nothing to delete!\n")
	}

	// EnQueue 3 values in queue
	queue.EnQueue("Hello0")
	queue.EnQueue("Hello1")
	queue.EnQueue("Hello2")

	// DeQueue all values
	for len(queue) > 0 {
		ele, msg := queue.DeQueue()
		if msg == true {
			fmt.Printf("%s deleted from queue\n", ele)
		}
	}

}
