def main():
    testCase = int(input())
    lst = []
    ans = []

    while testCase != 0:
        x = int(input())
        lst.append(x)
        testCase -= 1

    for i in lst:
        x = i
        cnt = 0
        dv = 0
        st = []
        c = []
        while x != 0:
            temp = x
            temp = int(temp % 10)
            x = int(x / 10)
            if x >= 0:
                dv += 1
            if temp != 0:
                st.append(str(temp) + str(0)*(dv-1))
                cnt += 1
        c.append(cnt)
        ans.append(c)
        ans.append(st)

    for i in ans:
        print(*i)


if __name__ == '__main__':
    main()





