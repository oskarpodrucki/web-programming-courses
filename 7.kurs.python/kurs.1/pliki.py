lines = []

with open(".autor.txt", encoding='UTF-8') as f:
    # print(f.readlines())
    for line in f:
        lines.append(line.strip())
    print(lines)