from pickle import NONE
from traceback import print_list


class Node:
  def __init__(self,value):
    self.value = value
    self.next = None

class LinkedList:
  def __init__(self,value):
    new_node = Node(value)
    self.head = new_node
    self.tail = new_node
    self.length = 1


  #to append a node to the end of linkedlist
  def append(self,value):
    new_node = Node(value)
    if self.length == 0:
      self.head = new_node
      self.tail = new_node
    else:
      self.tail.next = new_node
      self.tail = new_node
    self.length += 1 
    return True

#to remove the last element from the linkedlist
  def pop(self):
    if self.length == 0:#if the Node is empty
      return None
    else:#if there are Nodes present inside the linkedlist
      pre = self.head
      temp = self.head 
      while temp.next:
        pre = temp 
        temp = temp.next 
      self.tail = pre  
      self.tail.next = None
      self.length -= 1 
      if self.length == 0:# if only one Node is present in the linkedlist
        self.head = None
        self.tail = None 
      return temp.value #this returns the value which we removed from the linkedlist


  def prepend(self,value):# to insert a new node to the beginning of the linkedlist
    new_node = Node(value)
    if self.length == 0:
      self.head = new_node
      self.tail = new_node
    else:
      new_node.next = self.head 
      self.head = new_node  
    self.length += 1
    return True

  def pop_first(self):# to pop the first element
    if self.length == 0:
      return None
    else:
      temp = self.head 
      self.head = self.head.next
      temp.next = None 
      self.length -=1 
      if self.length == 0:
        self.tail = None
      return temp.value

  def get(self,index):#to get index
    if index < 0 or index>=self.length:
      return None 

    temp = self.head 
    for _ in range(index):
      temp = temp.next 
    return temp 

  def set_value(self, index, value):# to update the node value
    temp = self.get(index)
    if temp:
      temp.value = value
      return True
    return False

  def insert(self,index,value):
    if index<0 or index>self.length:
      return False
    if index == 0:
      return self.prepend(value)
    if index == self.length:
      return self.append(value)
    new_node = Node(value)
    temp = self.get(index-1)
    new_node.next = temp.next 
    temp.next = new_node
    self.length +=1 
    return True 

  def remove(self,index):
    if index<0 or index>=self.length:
      return None
    if index == 0:
      return self.pop_first()
    if index == self.length-1:
      return self.pop()
    prev = self.get(index-1)
    temp = prev.next
    prev.next = temp.next 
    temp.next = None
    self.length -= 1 
    return temp 

  def reverse(self):
    temp = self.head 
    self.head = self.tail 
    self.tail = temp 
    after = temp.next
    before = None 
    for _ in range(self.length):
      after = temp.next 
      temp.next = before
      before = temp 
      temp = after 

  #to print all the linkedlist
  def print_list(self):
    temp = self.head
    while temp is not None:
      print(temp.value)
      temp = temp.next
  
  


my_linked_list = LinkedList(11)
my_linked_list.append(3)
# my_linked_list.insert(1,1)
# 

my_linked_list.append(23)
my_linked_list.append(7)

my_linked_list.reverse()
# print(my_linked_list.remove(2))
my_linked_list.print_list() 


# my_linked_list.set_value(1,4)
# my_linked_list.print_list()
#my_linked_list.prepend(1)

#my_linked_list.print_list()
#(2) Items  - Returns 2 Node
#print(my_linked_list.pop())
# (1) Items - Returns 1 Node
#print(my_linked_list.pop())
# (0) Items - Returns None
#print(my_linked_list.pop())
# print(my_linked_list.get(0))
# print(my_linked_list.pop_first())
# print(my_linked_list.pop_first())
# print(my_linked_list.pop_first())