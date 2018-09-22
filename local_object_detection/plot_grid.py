import numpy as np
import matplotlib.pyplot as plt

grid_size = 20
buf = 5

def plot_data(x, y):
    plt.plot(x[0],y[0],'go')
    plt.plot(x[1:], y[1:], 'ro')
    print(x)
    print(y)
    plt.ylim(-grid_size-buf, grid_size+buf)
    plt.xlim(-grid_size-buf, grid_size+buf)
    plt.xticks(range(-grid_size-buf, grid_size+buf+1, 5))
    plt.yticks(range(-grid_size-buf, grid_size+buf+1, 5))
    plt.grid()
    plt.show()
#    plt.savefig("data-%.8d.png"%counter)

if __name__ == "__main__":
    counter = 0
    while True:
        try:
            tmp = input().strip().split()
            print(tmp)
            #data = np.array(tmp, dtype=np.double)
            x_pts = [int(tmp[2*i]) for i in range(len(tmp)//2)]
            y_pts = [int(tmp[2*i+1]) for i in range(len(tmp)//2)]
        except EOFError:
            print("Input has terminated! Exiting")
            exit()
        except ValueError:
            print("Invalid input, skipping.")
        plot_data(x_pts, y_pts) 
        counter+=1
