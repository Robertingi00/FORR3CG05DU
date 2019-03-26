class Node:
    def __init__(self, data, next=None):
        self.data = data
        self.next = next
        


class linkList:
    def __init__(self, head = None):
        self.head = None

    def insert(self, data):
        if(self.head):
            return self.head.next.insert(data)
        else:
            self.next = Node(data)
            return True
        
            

listi = linkList()

listi.insert(4)
listi.insert(5)
