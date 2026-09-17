<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<title>Multiplication Table</title>
<style>
  body {
    font-family: 'Segoe UI', Arial, sans-serif;
    background: #f4f4f4;
    display: flex;
    flex-direction: column;
    align-items: center;
    padding: 40px 20px;
  }

  form {
    background: #fff;
    border-radius: 10px;
    box-shadow: 0 4px 12px rgba(0,0,0,0.1);
    padding: 20px 25px;
    margin-bottom: 30px;
  }

  input[type="number"] {
    padding: 8px;
    border: 1px solid #ccc;
    border-radius: 5px;
    width: 80px;
  }

  button {
    padding: 8px 16px;
    background: #4b6cb7;
    color: #fff;
    border: none;
    border-radius: 5px;
    cursor: pointer;
    margin-left: 8px;
  }

  button:hover {
    background: #182848;
  }

  table {
    border-collapse: collapse;
    background: #fff;
    box-shadow: 0 4px 12px rgba(0,0,0,0.1);
  }

  th, td {
    border: 1px solid #ccc;
    padding: 8px 12px;
    text-align: center;
  }

  th {
    background: #4b6cb7;
    color: #fff;
  }
</style>
</head>
<body>

  <h1>Multiplication Table Generator</h1>

  <form method="get" action="">
    <label for="num">Enter a number:</label>
    <input type="number" id="num" name="num" min="1"
           value="<?php echo isset($_GET['num']) ? htmlspecialchars($_GET['num']) : ''; ?>">
    <button type="submit">Generate</button>
  </form>

  <?php
  if (isset($_GET['num']) && is_numeric($_GET['num'])) {
      $n = (int) $_GET['num'];

      if ($n > 0) {
          echo "<table>";

          // Header row with column indexes
          echo "<tr><th>&times;</th>";
          for ($col = 1; $col <= $n; $col++) {
              echo "<th>$col</th>";
          }
          echo "</tr>";

          // Table body with row index and products
          for ($row = 1; $row <= $n; $row++) {
              echo "<tr><th>$row</th>";
              for ($col = 1; $col <= $n; $col++) {
                  $product = $row * $col;
                  echo "<td>$product</td>";
              }
              echo "</tr>";
          }

          echo "</table>";
      } else {
          echo "<p>Please enter a number greater than 0.</p>";
      }
  }
  ?>

</body>
</html>
