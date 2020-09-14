<html>
<head>
<title>
First db page
</title>
</head>
<body>

<?php

$db=mysql_connect('localhost','root','');

if(!$db)
exit("error");

print "Connection done";

$x=$_POST["tfid"];
$y=$_POST["tfname"];
$z=$_POST["tfage"];
$a=$_POST["tfaddr"];
echo $x,$y,$z,$a;
	
$er=mysql_select_db("faculty");

if(!$er)
exit("database error");

print "database selected";
/*
$qu="create table faculty (facid varchar(10),facname varchar(25),facage int, facaddr varchar(25))";
$result=mysql_query($qu);
if(!$result)
 {
  print "<p>".$error."</p>";
  exit;
 }*/
$qu="insert into faculty values('$x','$y',$z,'$a');";

$result=mysql_query($qu);
print $result;

if(!$result)
 {
  print "<p>".$error."</p>";
  exit;
 }
echo("Record inserted successfully");

$qu="select * from faculty";

$result=mysql_query($qu);
if(!$result)
 {
  print "<p>".$error."</p>";
  exit;
 }
print "<table border='3'>
<caption><h2>Query results</h2></caption>";
print "<tr align='center'>";
$nr=mysql_num_rows($result);
$row=mysql_fetch_array($result);
$num_fie=mysql_num_fields($result);
$keys=array_keys($row);

for($ron=0;$ron<$num_fie;$ron++)
 print "<th>".$keys[2*$ron+1]. "</th>";

print "</tr>";

for($ron=0;$ron<$nr;$ron++)
{ print "<tr align='center'>";
  $values=array_values($row);
  for($ron1=0;$ron1<$num_fie;$ron1++)
   {$value=htmlspecialchars($values[2*$ron1+1]);
    print "<th>".$value."</th>";
   }
print "</tr>";
$row=mysql_fetch_array($result);
}
print "</table>";

print "<table border='3'>
<caption><h2>Demonstration of keys and values arrays </h2></caption>";
print "<tr align='center'>";
for($ron=0;$ron<2*$num_fie;$ron++)
 print "<th>".$keys[$ron]. "</th>";
print "</tr><tr>";
for($ron=0;$ron<2*$num_fie;$ron++)
 print "<th>".$values[$ron]. "</th>";
print "</tr></table>";
?>
</body>
</html>


