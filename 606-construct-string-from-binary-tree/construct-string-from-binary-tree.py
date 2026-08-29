# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def tree2str(self, root: Optional[TreeNode]) -> str:

        def v(root):
            if root ==None:
                return ''
            a=''
            b=''
            if root.left is not None: a=v(root.left)
            if root.right is not None: b=v(root.right)
            
            if not root.left and root.right:
                return  f'{root.val}()({b})'
            if  root.left and not root.right:
                return  f'{root.val}({a})'
            if not root.left and not root.right:
                return  f'{root.val}'
            return f'{root.val}({a})({b})'
        
        return v(root)
        