import matplotlib.pyplot as plt
import networkx as nx

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def build_list(values):
    head = ListNode(values[0])
    current = head
    for val in values[1:]:
        current.next = ListNode(val)
        current = current.next
    return head

def list_to_edges(head):
    edges = []
    current = head
    while current and current.next:
        edges.append((current.val, current.next.val))
        current = current.next
    return edges

def draw_linked_list(head, title):
    G = nx.DiGraph()
    edges = list_to_edges(head)
    nodes = []
    current = head
    while current:
        nodes.append(current.val)
        current = current.next

    G.add_edges_from(edges)
    pos = {val: (i, 0) for i, val in enumerate(nodes)}
    
    plt.figure(figsize=(12, 2))
    nx.draw(G, pos, with_labels=True, arrows=True, node_color='lightblue', node_size=2000, font_size=12)
    plt.title(title)
    plt.axis('off')
    plt.show()

def reverseBetween(head, left, right):
    if not head or left == right:
        return head

    dummy = ListNode(0)
    dummy.next = head
    prev = dummy

    # Step 1: move prev to the node before `left`
    for _ in range(left - 1):
        prev = prev.next

    curr = prev.next

    # Step 2: reverse the sublist
    for _ in range(right - left):
        temp = curr.next
        curr.next = temp.next
        temp.next = prev.next
        prev.next = temp

    return dummy.next

# Sample input
values = [1,2,3,4,5,6,7,8,9,10,11]
left, right = 4, 9
head = build_list(values)

# Draw before
draw_linked_list(head, f'Before reversing positions {left} to {right}')

# Reverse
head = reverseBetween(head, left, right)

# Draw after
draw_linked_list(head, f'After reversing positions {left} to {right}')
