import QtQuick 2.4
import QtQuick.Controls 1.3
import QtQuick.Layouts 1.1

Item {
    id: nmsl
    width: 640
    height: 480
    property alias mouseArea3: mouseArea3
    property alias mouseArea2: mouseArea2
    property alias mouseArea1: mouseArea1
    property alias bottomLeftRect: bottomLeftRect
    property alias middleRightRect: middleRightRect
    property alias topLeftRect: topLeftRect
    property alias icon: icon

    Image {
        id: icon
        x: 10
        y: 20
        width: 130
        height: 94
        source: "2.png"
    }

    Rectangle {
        id: topLeftRect
        width: 130
        height: 94
        color: "#00000000"
        border.color: "#808080"
        anchors.left: parent.left
        anchors.leftMargin: 10
        anchors.top: parent.top
        anchors.topMargin: 20

        MouseArea {
            id: mouseArea1
            anchors.fill: parent
        }
    }

    Rectangle {
        id: middleRightRect
        x: -5
        y: 1
        width: 130
        height: 94
        color: "#00000000"
        anchors.verticalCenter: parent.verticalCenter
        anchors.right: parent.right
        anchors.rightMargin: 10
        MouseArea {
            id: mouseArea2
            anchors.fill: parent
        }
        border.color: "#808080"
    }

    Rectangle {
        id: bottomLeftRect
        y: 2
        width: 130
        height: 94
        color: "#00000000"
        anchors.left: parent.left
        anchors.leftMargin: 10
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 20
        MouseArea {
            id: mouseArea3
            anchors.fill: parent
        }
        border.color: "#808080"
    }

}
