import React, {Component} from 'react';
import Button from "@material-ui/core/Button";
import "./Folder.css";

class Folder extends Component {
    constructor(props) {
        super(props);
        this.state={
            isHidden: true
        };
    }
    
    toggleHidden = () => {
        this.setState({
          isHidden: !this.state.isHidden
        });
    }

    render() {
        return (
            <div className="Home">
                <div>
                    <Button
                        variant="outlined"
                        size="large"
                        color="primary"
                        onClick={this.toggleHidden}
                    >
                        Home
                </Button>
                </div>
                {!this.state.isHidden ? (
                    <ul>
                        <li>File1</li>
                        <li>File2</li>
                        <li>File3</li>
                    </ul>
                )
                :
                (<div></div>)}
            </div>
        )
    }

}

export default Folder;