def merge(list1,list2):
  combined = []
  i = 0
  j = 0
  while i < len(list1) and j<len(list2):
    if list1[i]<list2[j]:
      combined.append(list1[i])
      i = i +1 
    else:
      combined.append(list2[j])
      j = j+1 

  while i<len(list1):
    combined.append(list1[i])
    i = i+1 
  
  while j<len(list2):
    combined.append(list2[j])
    j = j+1

  return combined 

def merge_sort(my_list):
  if len(my_list) == 1:
    return my_list

  mid = len(my_list)//2
  left = my_list[:mid]
  right = my_list[mid:]
  return merge(merge_sort(left),merge_sort(right))


print(merge_sort([1,2,7,8,3,4,5,6]))

  