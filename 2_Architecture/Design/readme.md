## TIC-TAC-TOE GAME DESIGN

When a player makes a move, we need to check if he/she wins the game. A simple solution is to check O(N^2) grid for horizontal, vertical and two diagonals to see if they are all occupied by this player. However, a better solution that has O(1) time would be to trade space for time. That is, we use O(N) space to record the number of each players in each row, column and two diagonals.

Instead of storing the counters for each player, We can alternatively reduce the space usage to half i.e. increment the counter for player 1 and decrement the counter for player 2. Then we need to check if the absolute value of the counter equals to N.

![EXAMPLE](https://user-images.githubusercontent.com/89633248/132450332-6b0575b7-1c90-4eb9-82ea-3664f623ee9a.png)

# Tic-Tac-Toe Frame 

The TicTacToeFrame (shown in figure 4.2.2) has a menu bar, the BoardPanel, and can open the three dialogs. The final static String values contain the file locations of the help and about HTML files respectively. This class extends java.swing.JFrame.

The constructor instantiates all of the components, their listeners, and the dialogs. It also, resizes, and centers the frame but it does not make it visible yet. The initMenuBar method is called by the constructor to build the menu bar.

The getBoard method returns the board variable. The update repaints and performs any necessary update functions to make sure the view represents the current GameState. The openNewGameDialog, openHelpDialog, and openAboutDialog methods open the respective dialogs. The announceEnd announces the end of a game and displays Player p as the winner; if p is null, then this method announces a tie. The askPlayAgain method prompts the user to play again and returns their choice (true for yes).

![FRAME](https://user-images.githubusercontent.com/89633248/132451765-81f0a9b8-925d-499a-82f5-6437a7558626.png)

