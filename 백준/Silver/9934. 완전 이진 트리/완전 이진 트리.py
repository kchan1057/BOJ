import sys

N = int(sys.stdin.readline().strip())
tree = list(map(int, sys.stdin.readline().split()))

def build_tree_by_level(nodes, level=0, levels=None):
    if not nodes:
        return
    
    mid = len(nodes) // 2
    root = nodes[mid]

    if levels is None:
        levels = []
    if len(levels) <= level:
        levels.append([])
    levels[level].append(root)

    build_tree_by_level(nodes[:mid], level + 1, levels)
    build_tree_by_level(nodes[mid + 1:], level + 1, levels)
    
    return levels

levels = build_tree_by_level(tree)

for level in levels:
    print(" ".join(map(str, level)))