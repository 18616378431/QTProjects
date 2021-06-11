<?php
if (!empty($_GET)) {
	$aResult['code'] = 200;
	$aResult['msg'] = "Hello Qt5,this is from PHP Get Request";
	$aResult['data'] = [
		['a' => 4, 'k' => 100, 't' => "this is get test string"],
		['b' => 5],
		['c' => 6],
	];
} else {
	$aResult['code'] = 200;
	$aResult['msg'] = "Hello Qt5,this is from PHP Post Request";
	$aResult['data'] = [
		['a' => 1, 'k' => 200, 't' => "this is post test string"],
		['b' => 2],
		['c' => 3],
	];
}

echo json_encode($aResult);
exit;
?>