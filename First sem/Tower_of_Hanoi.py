import tkinter as tk
from tkinter import messagebox
import time

class TowerOfHanoiGUI:
    def __init__(self, master):  # Fixed __init__
        self.master = master
        self.master.title("Tower of Hanoi")
        self.master.geometry("700x450")

        # Label and entry for number of discs
        self.label = tk.Label(master, text="Enter number of discs:")
        self.label.pack(pady=5)

        self.entry = tk.Entry(master)
        self.entry.pack(pady=5)

        # Speed control
        self.speed_label = tk.Label(master, text="Set speed (seconds per move):")
        self.speed_label.pack(pady=5)
        self.speed_scale = tk.Scale(master, from_=0.005, to=2.0, resolution=0.1, orient=tk.HORIZONTAL)
        self.speed_scale.set(0.5)
        self.speed_scale.pack(pady=5)

        # Start button
        self.start_button = tk.Button(master, text="Start", command=self.start_hanoi)
        self.start_button.pack(pady=10)

        # Move counter label
        self.move_label = tk.Label(master, text="Moves: 0", font=("Arial", 12))
        self.move_label.pack(pady=5)

        # Canvas for visualization (initial size)
        self.canvas = tk.Canvas(master, width=700, height=300, bg="white")
        self.canvas.pack(pady=10)

        self.towers = [[], [], []]
        self.move_count = 0

    def draw_towers(self, moving_disc=None):
        self.canvas.delete("all")
        canvas_width = int(self.canvas['width'])
        canvas_height = int(self.canvas['height'])

        # Draw rods
        for i in range(3):
            x = canvas_width // 4 * (i + 1)
            self.canvas.create_rectangle(x - 10, 50, x + 10, canvas_height - 50, fill="brown")

        # Draw discs
        for i in range(3):
            tower = self.towers[i]
            for j, disc in enumerate(tower):
                x_center = canvas_width // 4 * (i + 1)
                y_bottom = canvas_height - 50 - j * 20
                color = "red" if moving_disc and moving_disc == (i, disc) else "blue"
                self.canvas.create_rectangle(
                    x_center - disc * 10, y_bottom - 20,
                    x_center + disc * 10, y_bottom,
                    fill=color
                )

        self.move_label.config(text=f"Moves: {self.move_count}")
        self.master.update()
        time.sleep(self.speed_scale.get())

    def move(self, n, source, target, auxiliary):
        if n == 1:
            disc = self.towers[source].pop()
            self.draw_towers(moving_disc=(source, disc))
            self.towers[target].append(disc)
            self.move_count += 1
            self.draw_towers(moving_disc=(target, disc))
        else:
            self.move(n - 1, source, auxiliary, target)
            self.move(1, source, target, auxiliary)
            self.move(n - 1, auxiliary, target, source)

    def start_hanoi(self):
        try:
            num_discs = int(self.entry.get())
            if num_discs <= 0:
                raise ValueError
        except ValueError:
            messagebox.showerror("Invalid Input", "Please enter a positive integer.")
            return

        self.move_count = 0

        # Adjust canvas height dynamically
        canvas_height = max(300, 50 + num_discs * 25 + 50)
        self.canvas.config(height=canvas_height)

        self.towers = [list(range(num_discs, 0, -1)), [], []]
        self.draw_towers()
        self.move(num_discs, 0, 2, 1)

if __name__ == "__main__":  # Fixed main check
    root = tk.Tk()
    app = TowerOfHanoiGUI(root)
    root.mainloop()
