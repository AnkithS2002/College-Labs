board = [['1', '2', '3'], ['4', '5', '6'], ['7', '8', '9']]
placesDone = []

def printBoard():
    for j in range(len(board)):
        for i in range(len(board[0])):
            if i != 2:
                print(' ', board[j][i], ' | ', end='')
            else:
                print(' ', board[j][i], end='')
        if j != 2:
            print('\n -----------------')
        else:
            print('\n')


def place(pos, mark):
    if 1 <= pos <= 3:
        board[0][pos - 1] = mark
    elif pos <= 6:
        board[1][pos - 1 - 3] = mark
    else:
        board[2][pos - 1 - 6] = mark
    printBoard()


def check(mark):
    # check in row
    for i in range(len(board)):
        j = 0
        if board[i][j] == board[i][j + 1] == board[i][j + 2] == mark:
            return True
    # check in column
    for i in range(len(board)):
        j = 0
        if board[j][i] == board[j + 1][i] == board[j + 2][i] == mark:
            return True
    # check diagonals
    if board[0][0] == board[1][1] == board[2][2] == mark:
        return True
    if board[0][2] == board[1][1] == board[2][0] == mark:
        return True
    return False


def correctNumber(mark):
    if 1 <= mark <= 9 and mark not in placesDone:
        placesDone.append(mark)
        return int(mark)
    else:
        return correctNumber(int(input("Wrong Number, enter again: ")))


def main():
    keep_playing = 1
    while keep_playing:
        printBoard()
        print("NOTE: player 1 is X \nplayer 2 is O")
        player1 = input("Enter player 1 name: ")
        player2 = input("Enter player 2 name: ")
        k = 1
        while k != 9:
            if k % 2 == 0:
                pos = correctNumber(int(input(player1 + " enter where u want to place: ")))
                place(pos, 'X')
                done = check('X')
                if done:
                    print(player1 + " won the match")
                    break
            else:
                pos = correctNumber(int(input(player2 + " enter where u want to place: ")))
                place(pos, 'O')
                done = check('O')
                if done:
                    print(player2 + " won the match")
                    break
            k += 1
        keep_playing = int(input('\nPress 1 to continue playing, 0 to stop: '))


main()

