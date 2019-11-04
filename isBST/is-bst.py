""" Node is defined as
class node:
  def __init__(self, data):
      self.data = data
      self.left = None
      self.right = None
"""
MAX = 4294967296
MIN = -4294967296

def isBST(node, mini, maxi): 
    if node is None: 
        return True

    if node.data < mini or node.data > maxi: 
        return False
  
    return (isBST(node.left, mini, node.data - 1) and 
            isBST(node.right, node.data + 1, maxi)) 

def check_binary_search_tree_(root):
    return (isBST(root, MIN, MAX)) 