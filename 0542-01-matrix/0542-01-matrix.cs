

public class Solution {
    public int[][] UpdateMatrix(int[][] mat) {
        int n = mat.Length;
        int m = mat[0].Length;

        int[][] dist = new int[n][];
        for (int i = 0; i < n; i++) {
            dist[i] = new int[m];
        }

        int[][] vis = new int[n][];
        for (int i = 0; i < n; i++) {
            vis[i] = new int[m];
        }

        Queue<Tuple<Tuple<int, int>, int>> q = new Queue<Tuple<Tuple<int, int>, int>>();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (vis[i][j] == 0 && mat[i][j] == 0) {
                    vis[i][j] = 1;
                    q.Enqueue(new Tuple<Tuple<int, int>, int>(new Tuple<int, int>(i, j), 0));
                }
            }
        }

        int[] x = new int[]{ 1, -1, 0, 0 };
        int[] y = new int[]{ 0, 0, 1, -1 };

        while (q.Count > 0) {
            int row = q.Peek().Item1.Item1;
            int col = q.Peek().Item1.Item2;
            int steps = q.Peek().Item2;
            q.Dequeue();

            dist[row][col] = steps;

            for (int i = 0; i < 4; i++) {
                int newRow = row + x[i];
                int newCol = col + y[i];

                if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < m && vis[newRow][newCol] == 0) {
                    vis[newRow][newCol] = 1;
                    q.Enqueue(new Tuple<Tuple<int, int>, int>(new Tuple<int, int>(newRow, newCol), steps + 1));
                }
            }
        }

        return dist;
    }
}
